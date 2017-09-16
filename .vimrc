set enc=utf-8
set fenc=utf-8
set termencoding=utf-8
set nocompatible
set autoindent
set smartindent
set tabstop=4
set shiftwidth=4
set textwidth=120
set t_Co=256
syntax on
colorscheme elflord
set number
set showmatch
set comments=sl:/*,mb:\ *,elx:\ */

set clipboard=unnamedplus
map <C-a> <esc>ggVG<CR>
vmap <C-c> "+y<Esc>i
vmap <C-x> "+d<Esc>i

set tags+=~/.vim/tags/cpp
set tags+=~/.vim/tags/gl
set tags+=~/.vim/tags/sdl
set tags+=~/.vim/tags/qt4

:autocmd FileType cpp nnoremap <F9> :w <CR> :set makeprg=g++\ -DANDREIKKAA\ -std=c++14\ -Wall\ -Wextra\ -pg\ -D_GLIBCXX_DEBUG\ -fsanitize=undefined\ -fsanitize=address\ %\ -o\ %<.exe <CR> :make <CR> :cwindow <CR>

:autocmd FileType cpp nnoremap <C-F9> :w <CR> :set makeprg=g++\ -DANDREIKKAA\ -std=c++14\ -O2\ -Wall\ -Wextra\ %\ -o\ %<.exe <CR> :make <CR> :cwindow <CR> 

:autocmd FileType cpp nnoremap <F5> :!./%<.exe <CR>

:autocmd FileType cpp nnoremap <C-F5> :!gdb ./%<.exe <CR>
" -D_FORTIFY_SOURCE
:autocmd FileType c nnoremap <F8> :w <CR> :set makeprg=gcc\ -DANDREIKKAA\ -Wall\ -Wextra\ -pedantic\ -std=gnu11\ -O2\ -Wshadow\ -Wformat=2\ -Wconversion\ -Wlogical-op\ -Wcast-qual\ -Wcast-align\ -fsanitize=address\ -fsanitize=undefined\ -fno-sanitize-recover\ -fstack-protector\ %\ -o\ %<.exe <CR> :make <CR> :cwindow <CR>
:autocmd FileType c nnoremap <C-F8> :w <CR> :set makeprg=gcc\ -DANDREIKKAA\ -O2\ -Wall\ -Wextra\ %\ -o\ %<.exe <CR> :make <CR> :cwindow <CR> 
:autocmd FileType c nnoremap <F6> :!./%<.exe <CR>
:autocmd FileType c nnoremap <C-F6> :!gdb ./%<.exe <CR>

